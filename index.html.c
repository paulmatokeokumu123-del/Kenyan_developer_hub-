<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Programming Notes Hub - Learn Coding Easily</title>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css">
    <link href="https://fonts.googleapis.com/css2?family=Poppins:wght@400;500;600;700&display=swap" rel="stylesheet">
    <style>
        * { margin: 0; padding: 0; box-sizing: border-box; text-decoration: none; }
        html { scroll-behavior: smooth; }
        body { 
            font-family: 'Poppins', sans-serif; 
            line-height: 1.6; 
            color: #333; 
            background: #f8f9fa; 
        }
        
        /* Header & Nav */
        header { 
            background: linear-gradient(135deg, #4CAF50 0%, #45a049 100%); 
            color: white; 
            padding: 1rem 0; 
            position: fixed; 
            width: 100%; 
            top: 0; 
            z-index: 1000; 
            box-shadow: 0 2px 10px rgba(0,0,0,0.1); 
        }
        nav { 
            max-width: 1300px; margin: 0 auto; padding: 0 40px; 
            display: flex; justify-content: space-between; align-items: center; 
        }
        .logo { font-size: 1.5rem; font-weight: bold; cursor: pointer; }
        .logo span { color: #FFD700; }
        nav ul { display: flex; list-style: none; align-items: center; }
        nav ul li { margin-left: 2rem; }
        nav ul li a { color: white; font-weight: 500; transition: color 0.3s; }
        nav ul li a:hover { color: #FFD700; }
        
        #user-welcome { color: #FFD700; font-weight: 600; font-size: 0.9rem; }

        .login-btn { 
            background: #FFD700; color: #333 !important; padding: 0.5rem 1.5rem; 
            border-radius: 25px; font-weight: bold; transition: all 0.3s; 
            cursor: pointer; border: none;
        }
        .login-btn:hover { transform: translateY(-2px); box-shadow: 0 5px 15px rgba(255,215,0,0.4); }

        /* Hero Section */
        .hero { 
            background: linear-gradient(135deg, #4CAF50 0%, #45a049 100%); 
            min-height: 100vh; display: flex; align-items: center; 
            justify-content: center; text-align: center; color: white; 
            padding: 100px 20px 20px; 
        }
        .hero h1 { font-size: 3rem; margin-bottom: 1rem; font-weight: 700; }
        .hero p { font-size: 1.2rem; margin-bottom: 2rem; max-width: 600px; margin: 0 auto 2rem; }
        
        .btn { 
            background: #FFD700; color: #333; padding: 1rem 2rem; 
            border-radius: 50px; font-weight: bold; font-size: 1.1rem; 
            transition: all 0.3s; box-shadow: 0 10px 30px rgba(0,0,0,0.2); 
            display: inline-block; margin: 0 0.5rem; border: none; cursor: pointer;
        }
        .btn:hover { transform: translateY(-3px); box-shadow: 0 15px 40px rgba(0,0,0,0.3); }

        /* Content Sections */
        .container { max-width: 1300px; margin: 0 auto; padding: 0 40px; }
        section { padding: 80px 0; border-bottom: 1px solid #eee; }
        h2 { font-size: 2.5rem; text-align: center; margin-bottom: 3rem; color: #333; }

        .languages-grid { 
            display: grid; grid-template-columns: repeat(auto-fit, minmax(300px, 1fr)); 
            gap: 2rem; margin-bottom: 3rem; 
        }
        .lang-card { 
            background: white; padding: 2rem; border-radius: 15px; 
            box-shadow: 0 10px 30px rgba(0,0,0,0.05); text-align: center; 
            transition: all 0.3s; cursor: pointer; border-top: 4px solid #4CAF50; 
        }
        .lang-card:hover { transform: translateY(-8px); box-shadow: 0 20px 40px rgba(0,0,0,0.1); }
        .lang-icon { font-size: 3rem; margin-bottom: 1rem; }
        
        /* Code Block Styling */
        .code-example { 
            background: #1e1e1e; color: #d4d4d4; padding: 2rem 1.5rem; 
            border-radius: 10px; margin-top: 1.5rem; font-family: 'Consolas', monospace; 
            font-size: 0.95rem; line-height: 1.6; white-space: pre; 
            position: relative; overflow-x: auto;
        }
        .copy-btn { 
            position: absolute; top: 0.8rem; right: 0.8rem; 
            background: #4CAF50; color: white; border: none; 
            padding: 0.4rem 0.8rem; border-radius: 5px; cursor: pointer; 
            font-size: 0.75rem; transition: background 0.2s;
        }

        /* Modal */
        #login-modal { 
            display: none; position: fixed; top: 0; left: 0; width: 100%; height: 100%; 
            background: rgba(0,0,0,0.85); z-index: 2000; 
            align-items: center; justify-content: center; backdrop-filter: blur(5px);
        }
        .modal-content { 
            background: white; padding: 2.5rem; border-radius: 15px; 
            max-width: 400px; width: 90%; text-align: center; position: relative; 
        }
        .close-modal { 
            position: absolute; top: 1rem; right: 1.5rem; font-size: 1.5rem; 
            cursor: pointer; color: #999; 
        }
        .form-group { margin-bottom: 1.5rem; text-align: left; }
        .form-group label { display: block; margin-bottom: 0.5rem; color: #555; font-weight: 500; }
        .form-group input { 
            width: 100%; padding: 0.8rem; border: 2px solid #ddd; 
            border-radius: 8px; font-size: 1rem; font-family: inherit;
        }
        .form-group input:focus { outline: none; border-color: #4CAF50; }
        
        .login-success { 
            background: #d4edda; color: #155724; padding: 1rem; 
            border-radius: 8px; margin-bottom: 1rem; display: none; 
        }

        footer { background: #2c3e50; color: white; text-align: center; padding: 3rem 0; margin-top: 40px; }

        @media (max-width: 768px) { 
            .hero h1 { font-size: 2.2rem; } 
            nav ul li { display: none; } /* Simplified for mobile */
            .container { padding: 0 20px; } 
        }
    </style>
</head>
<body>
    <header>
        <nav>
            <div class="logo" onclick="window.scrollTo(0,0)">Code<span>Notes</span>Hub</div>
            <ul>
                <li><a href="#home">Home</a></li>
                <li><a href="#languages">Languages</a></li>
                <li><a href="#examples">Examples</a></li>
                <li id="user-welcome" style="display: none;"></li>
                <li><a href="javascript:void(0)" id="login-link" class="login-btn">Login</a></li>
            </ul>
        </nav>
    </header>

    <section id="home" class="hero">
        <div class="container">
            <h1>Master Programming Easily</h1>
            <p>Clear notes & examples for beginners. Login to save your progress!</p>
            <div class="hero-btns">
                <a href="#languages" class="btn">Start Learning</a>
                <button id="hero-login" class="btn">Login</button>
            </div>
        </div>
    </section>

    <section id="languages">
        <div class="container">
            <h2>Choose Your Language</h2>
            <div class="languages-grid">
                <div class="lang-card" onclick="showExample('python')">
                    <div class="lang-icon">🐍</div>
                    <h3>Python</h3>
                    <p>Easy syntax, perfect for your first language.</p>
                </div>
                <div class="lang-card" onclick="showExample('javascript')">
                    <div class="lang-icon">⚡</div>
                    <h3>JavaScript</h3>
                    <p>The language of the web. Make sites interactive.</p>
                </div>
                <div class="lang-card" onclick="showExample('java')">
                    <div class="lang-icon">☕</div>
                    <h3>Java</h3>
                    <p>Powerful, structured, and used by top companies.</p>
                </div>
            </div>
        </div>
    </section>

    <section id="examples">
        <div class="container">
            <h2>Code Snippet</h2>
            <div id="example-content">
                <p style="text-align: center; color: #888; font-style: italic;">
                    Select a language above to load a code example...
                </p>
            </div>
        </div>
    </section>

    <div id="login-modal">
        <div class="modal-content">
            <span class="close-modal">&times;</span>
            <h2 style="margin-bottom: 1.5rem;">Welcome Back</h2>
            <div id="login-success" class="login-success">Logged in successfully!</div>
            <form id="login-form">
                <div class="form-group">
                    <label>Username</label>
                    <input type="text" id="username" placeholder="Enter any name" required>
                </div>
                <div class="form-group">
                    <label>Password</label>
                    <input type="password" id="password" placeholder="••••••••" required>
                </div>
                <button type="submit" class="btn" style="width: 100%; margin: 0;">Sign In</button>
            </form>
        </div>
    </div>

    <footer>
        <div class="container">
            <p>&copy; 2026 CodeNotesHub | Built for Beginners | Nairobi, Kenya</p>
        </div>
    </footer>

    <script>
        // Use backticks (`) for multi-line strings to avoid syntax errors
        const examples = {
            python: `# Python Hello World & Calculator
print("Hello Beginner! 👋")

# Simple calculator
num1 = 10
num2 = 5
print(f"Add: {num1 + num2}")
print(f"Subtract: {num1 - num2}")`,

            javascript: `// JavaScript Counter
let count = 0;

function increment() {
  count++;
  console.log("Count is now: " + count);
}

// Run the function
increment(); // Output: 1`,

            java: `// Java Basic Program
public class Beginner {
  public static void main(String[] args) {
    System.out.println("Hello Java!");
    int a = 5, b = 3;
    System.out.println("Sum: " + (a + b));
  }
}`
        };

        let currentUser = null;

        // UI Logic
        const modal = document.getElementById('login-modal');
        const loginLink = document.getElementById('login-link');
        const heroLogin = document.getElementById('hero-login');
        const welcomeTxt = document.getElementById('user-welcome');

        function openLogin() {
            modal.style.display = 'flex';
        }

        function closeLogin() {
            modal.style.display = 'none';
            document.getElementById('login-form').reset();
            document.getElementById('login-success').style.display = 'none';
        }

        function updateUI() {
            if (currentUser) {
                loginLink.textContent = 'Logout';
                loginLink.onclick = logout;
                welcomeTxt.textContent = `Hi, ${currentUser}!`;
                welcomeTxt.style.display = 'block';
                heroLogin.style.display = 'none';
            } else {
                loginLink.textContent = 'Login';
                loginLink.onclick = openLogin;
                welcomeTxt.style.display = 'none';
                heroLogin.style.display = 'inline-block';
            }
        }

        function logout() {
            currentUser = null;
            updateUI();
        }

        // Form Handling
        document.getElementById('login-form').addEventListener('submit', function(e) {
            e.preventDefault();
            const username = document.getElementById('username').value;
            if (username) {
                currentUser = username;
                document.getElementById('login-success').style.display = 'block';
                setTimeout(() => {
                    closeLogin();
                    updateUI();
                }, 1000);
            }
        });

        // Content Display
        function showExample(lang) {
            const content = document.getElementById('example-content');
            const code = examples[lang] || 'No example found.';
            
            // Clean template literal for the innerHTML
            content.innerHTML = `
                <h3 style="text-align: center; margin-bottom: 1rem; color: #4CAF50;">
                    ${lang.toUpperCase()} snippet
                </h3>
                <div class="code-example">
                    <button class="copy-btn" onclick="copyCode(this)">Copy Code</button>
                    <code>${code}</code>
                </div>
                <p style="text-align: center; margin-top: 1.5rem; color: #666; font-size: 0.9rem;">
                    💡 Tip: Try running this in an online IDE like Replit!
                </p>
            `;
            
            document.querySelector('#examples').scrollIntoView({ behavior: 'smooth' });
        }

        function copyCode(btn) {
            const codeText = btn.parentElement.querySelector('code').innerText;
            navigator.clipboard.writeText(codeText).then(() => {
                const originalText = btn.textContent;
                btn.textContent = 'Copied!';
                btn.style.background = '#2c3e50';
                setTimeout(() => {
                    btn.textContent = originalText;
                    btn.style.background = '#4CAF50';
                }, 2000);
            });
        }

        // Global Listeners
        document.querySelector('.close-modal').onclick = closeLogin;
        heroLogin.onclick = openLogin;
        loginLink.onclick = openLogin;
        
        window.onclick = (e) => {
            if (e.target === modal) closeLogin();
        };

        // Init
        updateUI();
    </script>
</body>
</html>
