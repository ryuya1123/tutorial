import { render, screen } from "@testing-library/react";
import userEvent from "@testing-library/user-event";
import { SimpleButton } from "./SimpleButton";


test ("if Click button when change diplay ON or OFF", async () => {
    const user = userEvent.setup();
    render(<SimpleButton />);
    const simpleButton = screen.getByRole("button");
    expect(simpleButton).toHaveTextContent("OFF");
    await user.click(simpleButton);
    expect(simpleButton).toHaveTextContent("ON");
});

// Snapshot test
test("display 'OFF' when render soon", () => {
    const view = render(<SimpleButton />);
    expect(view.container).toMatchSnapshot();
});
