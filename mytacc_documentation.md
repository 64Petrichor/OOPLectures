# myTacc Documentation

## Problem Statement and Solution Overview

In today's fast-paced world, individuals often reflect on what they are grateful for, yet lack structured ways to translate gratitude into tangible, positive actions. This disconnect limits societal impact and individual growth. Simultaneously, organizations aligned with the United Nations Sustainable Development Goals (SDGs) face challenges in engaging individuals meaningfully.

**myTacc** (short for “my Thanks and Contribution Calculator”) is a web-based platform that bridges this gap. It allows users to:

- Express gratitude for people, experiences, or privileges.
- Commit to specific actions that give back to society.
- Receive real-time feedback via an AI-powered "debt score" (based on how much they’ve benefited) and “XP” (experience points) for their positive contributions.

Using **Gemini AI** and built on **Django**, myTacc gamifies social good and gratitude, turning personal reflection into collective impact.

---

## Technical Architecture Diagram

Below is an outline of the architecture:

### 📦 Frontend
- HTML/CSS/JS + Django Templates
- Forms for gratitude and action entry
- XP/debt score display module
- User dashboard

### ⚙️ Backend (Django)
- User authentication & session management
- Views for CRUD operations on gratitude/actions
- Gemini AI integration (via API or internal logic) for scoring

### 🧠 AI Module (Gemini)
- Processes gratitude entries to generate “debt score”
- Evaluates proposed actions and assigns XP
- Adjusts scores based on SDG alignment and impact level

### 🗄️ Database (PostgreSQL)
- Users
- Gratitude Entries
- Action Entries
- XP Logs

### 🌍 External APIs (Optional for roadmap)
- SDG-aligned charity databases
- Payment/donation gateways (e.g., Stripe)

---

## Implementation Details

- **Language & Framework**: Python 3, Django 4.x
- **AI Integration**: Gemini API (custom logic for NLP scoring)
- **Scoring Logic**:
  - Gratitude statements are scored by analyzing sentiment, depth, and implied privilege/benefit.
  - Actions are scored by projected impact, effort, and SDG alignment.
- **XP System**:
  - Users earn XP for actions.
  - Debt score decreases as XP increases.
  - Visualization via progress bars and leaderboards.
- **Data Storage**:
  - PostgreSQL used to store user data and logs securely.
  - All entries timestamped and categorized by SDG relevance.

---

## SDG Alignment Explanation

myTacc supports the following UN Sustainable Development Goals:

- **🎯 SDG 3: Good Health and Well-being**  
  Donate or volunteer in healthcare-related causes (e.g., health drives, mental health support).

- **🎓 SDG 4: Quality Education**  
  Support educational access by tutoring, donating books, or funding learning programs.

- **🏙️ SDG 11: Sustainable Cities and Communities**  
  Take part in urban clean-ups, housing efforts, or donate to community resilience programs.

- **🌱 SDG 13: Climate Action**  
  Donate to climate initiatives or take personal actions like reducing emissions or installing solar panels.

Each action is tagged with SDGs and contributes to a global impact dashboard.

---

## Future Development Roadmap

### 🔜 Short-Term (1–3 months)
- Improve mobile UX/UI
- Add Stripe/PayPal donation integration
- Enable media uploads with gratitude/action entries

### 🚀 Mid-Term (3–6 months)
- Action verification via media/proof
- API integration with NGO/SDG platforms
- Localization in multiple languages

### 🌍 Long-Term (6+ months)
- Blockchain-based verification system
- Global impact leaderboard and map
- Public API for third-party app integration
