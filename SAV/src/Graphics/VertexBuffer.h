#pragma once

class VertexBuffer {
public:
	VertexBuffer();
	VertexBuffer(const void * data, unsigned int size);
	~VertexBuffer();

	void SetData(const void * data, unsigned int size);
	void UpdateData(const void * data, unsigned int size);
    void ClearData();
	void Bind() const;
	void Unbind() const;

private:
	unsigned int m_RendererID;
};